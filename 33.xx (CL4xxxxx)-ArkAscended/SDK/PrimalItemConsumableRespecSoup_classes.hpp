#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xEF8 - 0xEE0)
// BlueprintGeneratedClass PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C
class UPrimalItemConsumableRespecSoup_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         UseRespecCooldown;                                 // 0xEF0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_54D7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CooldownTimeInSeconds;                             // 0xEF4(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumableRespecSoup_C* GetDefaultObj();

	double BPGetCustomInventoryWidgetText(float CallFunc_Conv_DoubleToFloat_ReturnValue, double* CallFunc_GetRealWorldUtcTimeInSeconds_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_FloatToDouble_ReturnValue, double CallFunc_GetLastRespecTime_LastRespecUtcTime, float CallFunc_Conv_DoubleToFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast);
	class AShooterPlayerState* GetLastRespecTime(double* LastRespecUtcTime, double* LastRespec, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
	bool BPCanUse(double CallFunc_Conv_FloatToDouble_ReturnValue, double* CallFunc_GetRealWorldUtcTimeInSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_Conv_FloatToDouble_InFloat_ImplicitCast);
	void BlueprintUsed();
	class AShooterPlayerState* ExecuteUbergraph_PrimalItemConsumableRespecSoup(int32* EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
};

}


