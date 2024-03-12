#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0xC00 - 0xA38)
// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
class UDyeUI_C : public UUI_DyeItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0xA40(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xA48(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UImage*                                ArkPrimeIcon;                                      // 0xA50(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   CloseButton;                                       // 0xA58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDyeRegionButton_C*                    Color0;                                            // 0xA60(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color1;                                            // 0xA68(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color2;                                            // 0xA70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color3;                                            // 0xA78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color4;                                            // 0xA80(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UDyeRegionButton_C*                    Color5;                                            // 0xA88(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	class UImage*                                DrawCursorWidget;                                  // 0xA90(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          DurabilityBar;                                     // 0xA98(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   DyeButton;                                         // 0xAA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                DyeIcon;                                           // 0xAA8(0x8)(ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ErasePainting;                                     // 0xAB0(0x8)(ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                ErasePaintingIcon;                                 // 0xAB8(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_0;                           // 0xAC0(0x8)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient, RepNotify)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_C_1;                           // 0xAC8(0x8)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient, Interp)
	class UHorizontalBox*                        GamepadRegionQuickButtons;                         // 0xAD0(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image;                                             // 0xAD8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_0;                                           // 0xAE0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_2;                                           // 0xAE8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0xAF0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0xAF8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_5;                                           // 0xB00(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional)
	class UImage*                                Image_6;                                           // 0xB08(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional)
	class UImage*                                Image_7;                                           // 0xB10(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly)
	class UImage*                                Image_8;                                           // 0xB18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly)
	class UImage*                                Image_18;                                          // 0xB20(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor)
	class UImage*                                Image_19;                                          // 0xB28(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor)
	class UImage*                                Image_82;                                          // 0xB30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                Image_94;                                          // 0xB38(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_117;                                         // 0xB40(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UImage*                                Image_120;                                         // 0xB48(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak)
	class UImage*                                Image_130;                                         // 0xB50(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, ContainsInstancedReference)
	class UImage*                                Image_151;                                         // 0xB58(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_179;                                         // 0xB60(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_216;                                         // 0xB68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference)
	class UImage*                                Image_264;                                         // 0xB70(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, EditorOnly, AssetRegistrySearchable)
	class UImage*                                Image_292;                                         // 0xB78(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, AssetRegistrySearchable)
	class UImage*                                Image_318;                                         // 0xB80(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable)
	class UImage*                                Image_337;                                         // 0xB88(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_346;                                         // 0xB90(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_367;                                         // 0xB98(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NoDestructor, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_499;                                         // 0xBA0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UImage*                                Image_955;                                         // 0xBA8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional, EditorOnly, NoDestructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1020;                                        // 0xBB0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay)
	class UImage*                                Image_1066;                                        // 0xBB8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, AdvancedDisplay)
	class UImage*                                ItemIcon;                                          // 0xBC0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               LoadPaintings;                                     // 0xBC8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UUI_PreviewWidget*                     MeshPreview;                                       // 0xBD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               ResetCamera;                                       // 0xBD8(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButton_HUB_ASA_C*               SavePaintings;                                     // 0xBE0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                SavePaintingsIcon;                                 // 0xBE8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UScaleBox*                             ScaleBox_1;                                        // 0xBF0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, Interp)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xBF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UDyeUI_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	bool FixConsoleIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UImage*>* K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, class FString* CallFunc_GetObjectName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	void AddedToViewport();
	void ExecuteUbergraph_DyeUI(int32* EntryPoint);
};

}


