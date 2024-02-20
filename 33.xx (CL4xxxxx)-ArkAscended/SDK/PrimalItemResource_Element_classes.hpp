#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xEF0 - 0xED0)
// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
{
public:
	class FName                                  ShapeshifterSmallsCustomTag;                       // 0xED0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      PreviousShapeshifterClientValue;                   // 0xED8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class APrimalCharacter*                      ServerShapeshifterToFeed;                          // 0xEE0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  ShapeshifterBiglyCustomTag;                        // 0xEE8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemResource_Element_C* GetDefaultObj();

	bool BPServerHandleItemNetExecCommand(bool K2Node_SwitchName_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	double FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted, bool* Mounted, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, const TArray<struct FHitResult>& CallFunc_VTraceMultiBP_OutHits, bool CallFunc_VTraceMultiBP_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2);
	bool BPPreUseItem(const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool* CallFunc_IsValid_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool* CallFunc_BPServerHandleNetExecCommand_ReturnValue_1);
	bool BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool* Ret, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class APrimalDinoCharacter* CallFunc_FindShapeshifter_Shapeshifter, bool CallFunc_FindShapeshifter_RetMounted, bool* CallFunc_IsValid_ReturnValue_1);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, int32 CallFunc_IGet_Max_Ammo_RetVal, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	bool BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface);
};

}


