#include <stdio.h>
#include <math.h> // floor
struct Pixel {
    unsigned char B; // byte
    unsigned char G; // byte
    unsigned char R; // byte
};
int main() {
    struct Pixel pixel, pixel2;
    unsigned char byte;
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    int offset, PAL, BPP, WPX, lap, i;
    FILE * imagem, * imagem2;
    imagem = fopen("sapo.bmp","r");
    fseek(imagem, 10, SEEK_SET);
    fread(&dword, sizeof(dword), 1, imagem);
    offset = dword;
    printf("Offset: %u\n", offset);
    fseek(imagem, 18, SEEK_SET);
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("WPX: %u\n", WPX);
    fseek(imagem, 28, SEEK_SET);
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("BPP: %u\n", BPP);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);

    imagem2 = fopen("novosapo.bmp","w");
    rewind(imagem);
    for(i = 0; i < offset; i++) {
       	fread(&byte, sizeof(byte), 1, imagem);
    	fwrite(&byte, sizeof(byte), 1, imagem2);
    }
    fclose(imagem2);
    fclose(imagem);
    return 0;
    // Leitura dos pixels
    printf("\nPixels =========\n");
    lap = 0;
    byte = 0;
    while(!feof(imagem)) {
        // leia a informa��o do pixel (canais R, G e B)
        if(fread(&pixel, sizeof(pixel), 1, imagem)){
        	pixel2.R = pixel.G;
        	pixel2.G = pixel.R;
        	pixel2.B = pixel.B;
        	fwrite(&pixel2, sizeof(pixel2), 1, imagem2);
		}
        lap = lap + 3;
        if((lap + 3) > PAL) {
            fseek(imagem, (PAL - lap), SEEK_CUR);
            for(i = 0; i < PAL - lap; i++)
            	fwrite(&byte, sizeof(byte), 1, imagem2);
            lap = 0;
        }
    };
    fclose(imagem2);
    fclose(imagem);
    return 0;
}

