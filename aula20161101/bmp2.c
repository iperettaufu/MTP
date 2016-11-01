#include <stdio.h>
#include <math.h> // floor
struct Pixel { // na ordem de leitura/escrita
    unsigned char B; // byte
    unsigned char G; // byte
    unsigned char R; // byte
};
int main() {
    struct Pixel pixel, pixel2;
    unsigned char byte;
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    int offset, PAL, BPP, WPX, HPX, aux, i, j;
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
    fseek(imagem, 22, SEEK_SET);
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("HPX: %u\n", HPX);
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
    // Leitura dos pixels
    byte = 0x0;
    aux = PAL - WPX*3;
    for(j = 0; j < HPX; j++) {
		for(i = 0; i < WPX; i++) {
			fread(&pixel, sizeof(pixel), 1, imagem);
			pixel2.G = pixel.R;
			pixel2.R = pixel.G;
			pixel2.B = pixel.B;
			fwrite(&pixel2, sizeof(pixel2), 1, imagem2);
		}
		if(aux > 0) {
			fseek(imagem, aux, SEEK_CUR);
			fwrite(&byte, sizeof(byte), aux, imagem2);
		}
	}
    fclose(imagem2);
    fclose(imagem);
    return 0;
}

