#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass EndLanding_TK.EndLanding_TK_C
class UEndLanding_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UEndLanding_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	bool ExecuteUbergraph_EndLanding_TK(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AActor** K2Node_Event_OwnerActor, bool* K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3);
};

}


