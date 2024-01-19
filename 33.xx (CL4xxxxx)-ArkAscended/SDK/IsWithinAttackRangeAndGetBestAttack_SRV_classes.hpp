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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                IsWithinAttackRangeKey;                            // 0xA0(0x28)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Last_Check_Attack_Range_Closest_Point_Key;         // 0xC8(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                Use_Altenate_Move_Point;                           // 0xF0(0x28)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                BestAttackIndexKey;                                // 0x118(0x28)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                AttackIntervalKey;                                 // 0x140(0x28)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* GetDefaultObj();

	float UpdateBlackboardKeys(class APrimalDinoAIController** OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1);
	float ReceiveTick();
	int32 ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


