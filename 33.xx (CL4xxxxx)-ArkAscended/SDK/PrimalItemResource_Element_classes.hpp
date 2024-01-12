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
	class FName                                  ShapeshifterSmallsCustomTag;                       // 0xEB0(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	class APrimalCharacter*                      PreviousShapeshifterClientValue;                   // 0xEB8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	class APrimalCharacter*                      ServerShapeshifterToFeed;                          // 0xEC0(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, EditConst, SubobjectReference)
	class FName                                  ShapeshifterBiglyCustomTag;                        // 0xEC8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemResource_Element_C* GetDefaultObj();

	bool BPServerHandleItemNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	double FindShapeshifter(bool* Mounted, class APrimalDinoCharacter** Result, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, TArray<struct FHitResult>* CallFunc_VTraceMultiBP_OutHits, bool* CallFunc_VTraceMultiBP_ReturnValue, struct FHitResult* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool* CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool* CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6);
	struct FBPNetExecParams BPPreUseItem(bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, class FString* CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1);
	struct FBPNetExecParams BPCanUse(bool bIgnoreCooldown, class AActor** CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, class APlayerController* CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_1, class FString* CallFunc_GetPlayerName_ReturnValue, class APrimalDinoCharacter* CallFunc_FindShapeshifter_Shapeshifter, bool CallFunc_FindShapeshifter_RetMounted, bool* CallFunc_IsValid_ReturnValue_1);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32* CallFunc_IGet_Max_Ammo_RetVal, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}


