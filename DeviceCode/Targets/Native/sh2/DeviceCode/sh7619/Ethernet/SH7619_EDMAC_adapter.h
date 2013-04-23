////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "tinyhal.h" 
#include "..\..\..\..\..\..\pal\rtip\dhcpcapi.h"

#ifndef _SH7619_EDMAC_ADAPTER_H_1
#define _SH7619_EDMAC_ADAPTER_H_1 1

extern int xn_bind_sh7619_mac(int minor_number);

// Data Structures
struct SH7619_EDMAC_DRIVER_CONFIG
{
    GPIO_PIN            PHY_PD_GPIO_Pin;			// phy power down control
};

struct SH7619_EDMAC_Driver
{
    int m_interfaceNumber;
    DHCP_session m_currentDhcpSession;

    //--//

    static int  Open   (   void          );
    static BOOL Close  (   void          );
    static BOOL Bind   (   void          );
};

//
// SH7619_EDMAC_ADAPTER
//////////////////////////////////////////////////////////////////////////////

#endif