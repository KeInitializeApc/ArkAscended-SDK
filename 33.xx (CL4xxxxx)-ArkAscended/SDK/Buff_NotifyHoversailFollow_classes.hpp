#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x297 (0xE08 - 0xB71)
// BlueprintGeneratedClass Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C
class ABuff_NotifyHoversailFollow_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_52DB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      HoverSail;                                         // 0xB78(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               Lastpassedlocation;                                // 0xB80(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Hoversail_has_been_set;                            // 0xB98(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Follow_string;                                     // 0xBA0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Follow_string_stasis_d;                            // 0xBB0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             TeleWorldHUDElementSize;                           // 0xBC0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       TeleWorldIndicatorSizeMult;                        // 0xBD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnchors                              TeleWorldHUDElementAnchor;                         // 0xBD8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Has_stasis_d;                                      // 0xBF8(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_52DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHUDElement                           LocationIndicatorHUDElementTemplate;               // 0xC00(0x1B0)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               MaxHUDIndicatorWorldOffset;                        // 0xDB0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MaxDistanceForHUDLocationIndicatorScaling;         // 0xDC8(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               MinHUDIndicatorWorldOffset;                        // 0xDD0(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MaxHUDLocationIndicatorScale;                      // 0xDE8(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       MinHUDLocationIndicatorScale;                      // 0xDF0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             InterpedScreenPos;                                 // 0xDF8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_NotifyHoversailFollow_C* GetDefaultObj();

	float BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements, const struct FVector2D& ScreenPos, const struct FHUDElement& LocalLocationHUDElem, double CallFunc_Atan2_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, const class FString& CallFunc_Concat_StrStr_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor_1, double CallFunc_MapRangeUnclamped_ReturnValue_1, double CallFunc_MapRangeUnclamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_OnScreen, bool* CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, struct FVector2D* CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, double CallFunc_Atan2_ReturnValue_1, double* CallFunc_RadiansToDegrees_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, float* K2Node_MakeStruct_A_ImplicitCast, float* K2Node_MakeStruct_A_ImplicitCast_1, float* CallFunc_SetHUDElementIconRotation_NewAngle_ImplicitCast);
	bool Set_and_Pass_Loc(class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	float BuffTickServer();
	bool BuffTickClient(class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
};

}


