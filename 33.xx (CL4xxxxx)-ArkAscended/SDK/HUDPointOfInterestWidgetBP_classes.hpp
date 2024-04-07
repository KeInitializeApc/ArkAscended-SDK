#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xB50 - 0xA80)
// WidgetBlueprintGeneratedClass HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C
class UHUDPointOfInterestWidgetBP_C : public UHUDPointOfInterestWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA80(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Pulse;                                             // 0xA88(0x8)(ConstParm, BlueprintVisible, ExportObject, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Despawn;                                           // 0xA90(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Spawn;                                             // 0xA98(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate)
	class UWidgetAnimation*                      HideImmediately;                                   // 0xAA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Unfocused;                                         // 0xAA8(0x8)(ConstParm, BlueprintVisible, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Focused;                                           // 0xAB0(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UBorder*                               BorderDismiss;                                     // 0xAB8(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            DistanceLabel;                                     // 0xAC0(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                GamepadDismiss;                                    // 0xAC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            KbmDismissTex;                                     // 0xAD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          OnScreenIndicatorContainerPanel;                   // 0xAD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                OnScreenIndicatorImage;                            // 0xAE0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            OnScreenProgressLabel;                             // 0xAE8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                OnScreenProgressMaterialHost;                      // 0xAF0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanel*                          OuterContainer;                                    // 0xAF8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            PointDescTextBlock;                                // 0xB00(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                PointIcon;                                         // 0xB08(0x8)(BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                PointOffScreenArrowIcon;                           // 0xB10(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            PointTitleTextBlock;                               // 0xB18(0x8)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                SecondaryOnScreenProgressMaterialHost;             // 0xB20(0x8)(ConstParm, BlueprintReadOnly, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class APrimalBuff_Companion*                 MyPlayerCompanionBuff;                             // 0xB28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsFocused;                                        // 0xB30(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanBeFocused;                                     // 0xB31(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Is_visible;                                        // 0xB32(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Is_despawning;                                     // 0xB33(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_243C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstance*                     ProgressMaterial;                                  // 0xB38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ProgressMaterialInstanceDynamic;                   // 0xB40(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              ProgressMaterialInstanceDynamicSecondary;          // 0xB48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHUDPointOfInterestWidgetBP_C* GetDefaultObj();

	bool FixConsoleIcon(bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	void DestroyPointOfInterestWidget();
	void Construct();
	void DestroyWidgetAfterAnim();
	float Tick(struct FGeometry* MyGeometry);
	void PlayPulseAnimation();
	void SetDismissOverlay(bool Visible);
	double ExecuteUbergraph_HUDPointOfInterestWidgetBP(int32* EntryPoint, class APawn** CallFunc_GetOwningPlayerPawn_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn** CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2);
};

}


