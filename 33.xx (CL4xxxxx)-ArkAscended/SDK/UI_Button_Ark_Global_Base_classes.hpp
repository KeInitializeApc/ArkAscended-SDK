#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x262 (0x592 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Base.UI_Button_Ark_Global_Base_C
class UUI_Button_Ark_Global_Base_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_CentralFill;                                // 0x338(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Main;                                       // 0x340(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x348(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UImage*                                Image_LeftBorder;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftFill;                                    // 0x358(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightBorder;                                 // 0x360(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightFill;                                   // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ButtonIcon;                                    // 0x370(0x8)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USpacer*                               Spacer_164;                                        // 0x380(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, ContainsInstancedReference)
	class UTextBlock*                            Text_ButtonMessage;                                // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Hello_Sasha_Whats_up;                              // 0x390(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x3A0(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_ButtonType                   Button_Type;                                       // 0x3B0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A74[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       In_Width_Override;                                 // 0x3B8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	double                                       In_Height_Override;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         UseIcon;                                           // 0x3C8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A75[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FVector2D                             ImageSize;                                         // 0x3D8(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x3E8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FSlateFontInfo                        ButtonFont;                                        // 0x400(0x58)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	double                                       SpaceBetweenIconAndText;                           // 0x458(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x460(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x470(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x480(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x490(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSTRUCT_FullButtonDesign              ButtonDesign;                                      // 0x4A0(0xF0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ForceDebug;                                        // 0x590(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ENUM_ButtonStates                 DebugState;                                        // 0x591(0x1)(ConstParm, Net, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Global_Base_C* GetDefaultObj();

	class FText SetWidgetText();
	enum class ENUM_ButtonStates SetButtonColorPreset(enum class ENUM_ButtonStates State, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2);
	struct FSlateBrush SetFillToColor();
	struct FSlateColor SetBorderToColor();
	void BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool PreConstruct();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	float ExecuteUbergraph_UI_Button_Ark_Global_Base(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, class UTexture2D* K2Node_Select_Default, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UTexture2D* K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	void Hello_Sasha_Whats_up__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnClick__DelegateSignature();
};

}


