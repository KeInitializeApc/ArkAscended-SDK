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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(ExportObject, Parm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	bool UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, float CallFunc_GetAttackInterval_ReturnValue);
	float ReceiveTick();
	bool ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, float CallFunc_GetAttackInterval_ReturnValue, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool* CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8* CallFunc_GetCurrentAttackIndex_ReturnValue, int32* CallFunc_Conv_ByteToInt_ReturnValue);
};

}


