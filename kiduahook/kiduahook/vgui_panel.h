#pragma once

#include "sdk.h"

class VGUI_Panel
{
public:
	unsigned int GetPanel( int type )
	{
		typedef unsigned int( __thiscall *tGetPanel )( void*, int type );
		return getvfunc<tGetPanel>( this, 1 )( this, type );
	}

	const char *GetName( unsigned int vguiPanel )
	{
		typedef const char* ( __thiscall* OriginalFn )( PVOID, unsigned int );
		return getvfunc<OriginalFn>( this, 36 )( this, vguiPanel );
	}
};

extern VGUI_Panel* g_pPanel;