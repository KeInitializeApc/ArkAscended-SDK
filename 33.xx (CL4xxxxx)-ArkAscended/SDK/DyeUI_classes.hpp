#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0xBE0 - 0xA18)
// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
class UDyeUI_C : public UUI_DyeItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0xA20(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0xA28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UImage*                                ArkPrimeIcon;                                      // 0xA30(0x8)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0xA38(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDyeRegionButton_C*                    Color0;                                            // 0xA40(0x8)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color1;                                            // 0xA48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color2;                                            // 0xA50(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color3;                                            // 0xA58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color4;                                            // 0xA60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color5;                                            // 0xA68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UImage*                                DrawCursorWidget;                                  // 0xA70(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UProgressBar*                          DurabilityBar;                                     // 0xA78(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UCustomButtonWidget*                   DyeButton;                                         // 0xA80(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UImage*                                DyeIcon;                                           // 0xA88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ErasePainting;                                     // 0xA90(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UImage*                                ErasePaintingIcon;                                 // 0xA98(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_0;                           // 0xAA0(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, DuplicateTransient, RepNotify)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_1;                           // 0xAA8(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, DuplicateTransient, Interp)
	class UHorizontalBox*                        GamepadRegionQuickButtons;                         // 0xAB0(0x8)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UImage*                                Image;                                             // 0xAB8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UImage*                                Image_0;                                           // 0xAC0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_2;                                           // 0xAC8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0xAD0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0xAD8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_5;                                           // 0xAE0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NonTransactional)
	class UImage*                                Image_6;                                           // 0xAE8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional)
	class UImage*                                Image_7;                                           // 0xAF0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditorOnly)
	class UImage*                                Image_8;                                           // 0xAF8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, EditorOnly)
	class UImage*                                Image_18;                                          // 0xB00(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xB08(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_82;                                          // 0xB10(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                Image_94;                                          // 0xB18(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_117;                                         // 0xB20(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UImage*                                Image_120;                                         // 0xB28(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_130;                                         // 0xB30(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, ContainsInstancedReference)
	class UImage*                                Image_151;                                         // 0xB38(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_179;                                         // 0xB40(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_216;                                         // 0xB48(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_264;                                         // 0xB50(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, EditorOnly, AssetRegistrySearchable)
	class UImage*                                Image_292;                                         // 0xB58(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional, AssetRegistrySearchable)
	class UImage*                                Image_318;                                         // 0xB60(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable)
	class UImage*                                Image_337;                                         // 0xB68(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_346;                                         // 0xB70(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_367;                                         // 0xB78(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_499;                                         // 0xB80(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UImage*                                Image_955;                                         // 0xB88(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1020;                                        // 0xB90(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1066;                                        // 0xB98(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, AdvancedDisplay)
	class UImage*                                ItemIcon;                                          // 0xBA0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               LoadPaintings;                                     // 0xBA8(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UUI_PreviewWidget*                     MeshPreview;                                       // 0xBB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ResetCamera;                                       // 0xBB8(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               SavePaintings;                                     // 0xBC0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UImage*                                SavePaintingsIcon;                                 // 0xBC8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	class UScaleBox*                             ScaleBox_1;                                        // 0xBD0(0x8)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xBD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeUI_C* GetDefaultObj();

	void GetVisibility_0(enum class ESlateVisibility ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	int32 FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void AddedToViewport();
	int32 ExecuteUbergraph_DyeUI();
};

}


