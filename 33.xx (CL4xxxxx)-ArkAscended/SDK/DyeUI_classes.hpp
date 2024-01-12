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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0xA20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst)
	class UImage*                                ArkPrimeIcon;                                      // 0xA30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0xA38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UDyeRegionButton_C*                    Color0;                                            // 0xA40(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color1;                                            // 0xA48(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color2;                                            // 0xA50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color3;                                            // 0xA58(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color4;                                            // 0xA60(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color5;                                            // 0xA68(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	class UImage*                                DrawCursorWidget;                                  // 0xA70(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          DurabilityBar;                                     // 0xA78(0x8)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   DyeButton;                                         // 0xA80(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                DyeIcon;                                           // 0xA88(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ErasePainting;                                     // 0xA90(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                ErasePaintingIcon;                                 // 0xA98(0x8)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_0;                           // 0xAA0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, DuplicateTransient, RepNotify)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_1;                           // 0xAA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, DuplicateTransient, Interp)
	class UHorizontalBox*                        GamepadRegionQuickButtons;                         // 0xAB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image;                                             // 0xAB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_0;                                           // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_2;                                           // 0xAC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0xAD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0xAD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_5;                                           // 0xAE0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional)
	class UImage*                                Image_6;                                           // 0xAE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional)
	class UImage*                                Image_7;                                           // 0xAF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly)
	class UImage*                                Image_8;                                           // 0xAF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly)
	class UImage*                                Image_18;                                          // 0xB00(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xB08(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_82;                                          // 0xB10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                Image_94;                                          // 0xB18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_117;                                         // 0xB20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UImage*                                Image_120;                                         // 0xB28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_130;                                         // 0xB30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, ContainsInstancedReference)
	class UImage*                                Image_151;                                         // 0xB38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_179;                                         // 0xB40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_216;                                         // 0xB48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_264;                                         // 0xB50(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, EditorOnly, AssetRegistrySearchable)
	class UImage*                                Image_292;                                         // 0xB58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, AssetRegistrySearchable)
	class UImage*                                Image_318;                                         // 0xB60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable)
	class UImage*                                Image_337;                                         // 0xB68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_346;                                         // 0xB70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_367;                                         // 0xB78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_499;                                         // 0xB80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UImage*                                Image_955;                                         // 0xB88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1020;                                        // 0xB90(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1066;                                        // 0xB98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, AdvancedDisplay)
	class UImage*                                ItemIcon;                                          // 0xBA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               LoadPaintings;                                     // 0xBA8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UUI_PreviewWidget*                     MeshPreview;                                       // 0xBB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ResetCamera;                                       // 0xBB8(0x8)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               SavePaintings;                                     // 0xBC0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UImage*                                SavePaintingsIcon;                                 // 0xBC8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UScaleBox*                             ScaleBox_1;                                        // 0xBD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xBD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeUI_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	class UTexture2D* FixConsoleIcons(TArray<class UWidget*>* Local_UWidgetIcons, class UImage** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void AddedToViewport();
	int32 ExecuteUbergraph_DyeUI();
};

}


