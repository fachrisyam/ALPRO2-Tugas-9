#include <iostream>
#define FNAME "linedirektif.p"
#pragma warn -rvl /*menghilangkan warning karena 
					nilai return tdk dikembalikan*/
					

int test(){
	std::cout<<"Pragma";
}
 
int main()
{
#line 100 FNAME /*mengganti line dan nama file
				yang ditampipilkan jika ada error*/
	test();
}

#error ini error //aplikasi menampilkan pesan error "ini error"
