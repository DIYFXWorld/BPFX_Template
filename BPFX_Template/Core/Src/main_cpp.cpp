#include "Audio.h"
#include "VCP.h"

void Audio_Input_Callback( int v )
{
	Audio::Set_Output( v );
}

extern "C" void main_cpp()
{
	Audio::Start();
	Audio::Active();

	Welcome( "F103C8 BPFX Test 1" );

	while( 1 )
	{
	}
}
