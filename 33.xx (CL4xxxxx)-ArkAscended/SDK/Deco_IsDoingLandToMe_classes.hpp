#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C
class UDeco_IsDoingLandToMe_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xA8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDeco_IsDoingLandToMe_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	class APawn* ExecuteUbergraph_Deco_IsDoingLandToMe(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor** CallFunc_GetTamedLandTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


