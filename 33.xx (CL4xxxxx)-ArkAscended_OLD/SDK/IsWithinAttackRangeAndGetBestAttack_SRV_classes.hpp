#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x168 - 0x98)
// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	float UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController);
	float ReceiveTick();
	float ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32* EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8 CallFunc_GetCurrentAttackIndex_ReturnValue, bool* CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue);
};

}


