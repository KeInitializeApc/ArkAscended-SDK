#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass AllowWandering.AllowWandering_C
class UAllowWandering_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAllowWandering_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	bool ExecuteUbergraph_AllowWandering(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
};

}


