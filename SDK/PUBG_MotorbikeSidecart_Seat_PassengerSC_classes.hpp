#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass MotorbikeSidecart_Seat_PassengerSC.MotorbikeSidecart_Seat_PassengerSC_C
	// 0x0000 (0x0454 - 0x0454)
	class AMotorbikeSidecart_Seat_PassengerSC_C : public AVehicleSeatBase_Moto_C
	{
	public:

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xf14ff6f1);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
