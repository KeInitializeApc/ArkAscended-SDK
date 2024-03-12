#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xF00 - 0xEE0)
// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
{
public:
	class FName                                  ShapeshifterSmallsCustomTag;                       // 0xEE0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      PreviousShapeshifterClientValue;                   // 0xEE8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      ServerShapeshifterToFeed;                          // 0xEF0(0x8)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  ShapeshifterBiglyCustomTag;                        // 0xEF8(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemResource_Element_C* GetDefaultObj();

	double BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, class FName* CommandName, struct FBPNetExecParams* ExecParams, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	bool FindShapeshifter(class APrimalDinoCharacter* Result, int32 Temp_int_Array_Index_Variable, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1, class AActor* CallFunc_GetOwner_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreUseItem(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1);
	bool BPCanUse(class APrimalCharacter* Res, bool CallFunc_IsTimeSince_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool* K2Node_DynamicCast_bSuccess_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams);
	bool BPSupportUseOntoItem(bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> BPUsedOntoItem(class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}


