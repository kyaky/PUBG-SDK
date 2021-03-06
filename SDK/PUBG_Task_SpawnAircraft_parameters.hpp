#pragma once

// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveTick
struct UTask_SpawnAircraft_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveExecute
struct UTask_SpawnAircraft_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ExecuteUbergraph_Task_SpawnAircraft
struct UTask_SpawnAircraft_C_ExecuteUbergraph_Task_SpawnAircraft_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
