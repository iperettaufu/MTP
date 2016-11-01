#include <stdio.h>
#include <math.h> // floor
struct Pixel {
    unsigned char B; // byte
    unsigned char G; // byte
    unsigned char R; // byte
};
int main() {
    struct Pixel pixel;
    int offset, WPX, HPX, BPP, NCP, NIC, PAL, aux, i, j;
    unsigned char byte;
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    FILE * imagem;
    imagem = fopen("sapo.bmp","r");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n", dword);
    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    //fseek(imagem, 4, SEEK_CUR);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Informação reservada: %08X\n", dword);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof(dword), 1, imagem);
    offset = dword;
    printf("Offset: %u\n", offset);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabeçalho: %u\n", dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (pixels): %u\n", WPX);
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem (pixels): %u\n", HPX);
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("Bits por pixel: %u\n", BPP);
    //dword	30-33	Método de compressão
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Método de compressão: %u\n", dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução horizontal: %u\n", dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolução vertical: %u\n", dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? 1 << BPP : dword; // "1 << BPP" equivale a "pow(2,BPP)"
    printf("Número de cores na paleta: %u\n", NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    NIC = (dword == 0) ? NCP : dword;
    printf("Número de cores importantes: %u\n", NIC);
    // Tamanho da linha da array de pixels (bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n", PAL);
    // Leitura dos pixels
    printf("\nPixels =========\n");
    aux = PAL - WPX*3;
    for(j = 0; j < HPX; j++) {
		for(i = 0; i < WPX; i++) {
			fread(&pixel, sizeof(pixel), 1, imagem);
			printf("R: %u, G: %u, B: %u\n", pixel.R, pixel.G, pixel.B);
		}
		if(aux > 0)
			fseek(imagem, aux, SEEK_CUR);
	}
    fclose(imagem);
    return 0;
}

