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
	class FName                                  ShapeshifterSmallsCustomTag;                       // 0xEB0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      PreviousShapeshifterClientValue;                   // 0xEB8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      ServerShapeshifterToFeed;                          // 0xEC0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FName                                  ShapeshifterBiglyCustomTag;                        // 0xEC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemResource_Element_C* GetDefaultObj();

	double BPServerHandleItemNetExecCommand(class AShooterPlayerController** ForPC, bool K2Node_SwitchName_CmpSuccess, class AShooterCharacter** CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	double FindShapeshifter(class APrimalDinoCharacter* Shapeshifter, bool RetMounted, bool Mounted, class APrimalDinoCharacter** Result, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_GetCameraLocation_ReturnValue, TArray<struct FHitResult>* CallFunc_VTraceMultiBP_OutHits, bool* CallFunc_VTraceMultiBP_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool* CallFunc_IsAlive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6);
	bool BPPreUseItem(const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, class FString* CallFunc_GetPlayerName_ReturnValue, class APlayerController** CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1);
	bool BPCanUse(bool ReturnValue, bool Ret, class APlayerController** CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_SwitchEnum_CmpSuccess, class FString* CallFunc_GetPlayerName_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class APrimalDinoCharacter** CallFunc_FindShapeshifter_Shapeshifter, bool* CallFunc_FindShapeshifter_RetMounted);
	bool BPSupportUseOntoItem(bool ReturnValue, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* CallFunc_DoesImplementInterface_ReturnValue, int32* CallFunc_IGet_Max_Ammo_RetVal, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool BPUsedOntoItem(class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* CallFunc_DoesImplementInterface_ReturnValue);
};

}


