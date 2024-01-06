#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xED0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
{
public:
	class FName                                  ShapeshifterSmallsCustomTag;                       // 0xEB0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class APrimalCharacter*                      PreviousShapeshifterClientValue;                   // 0xEB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class APrimalCharacter*                      ServerShapeshifterToFeed;                          // 0xEC0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class FName                                  ShapeshifterBiglyCustomTag;                        // 0xEC8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemResource_Element_C* GetDefaultObj();

	bool BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, bool K2Node_SwitchName_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue);
	double FindShapeshifter(class APrimalDinoCharacter** Result, int32 Temp_int_Array_Index_Variable, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, struct FRotator* CallFunc_GetControlRotation_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* CallFunc_Not_PreBool_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_3, bool* CallFunc_Not_PreBool_ReturnValue_4, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_6);
	bool BPPreUseItem(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_SwitchEnum_CmpSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1);
	bool BPCanUse(bool* ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_SwitchEnum_CmpSuccess, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams);
	bool BPSupportUseOntoItem(bool* ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2);
	bool BPUsedOntoItem();
};

}


