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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_CentralFill;                                // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Main;                                       // 0x340(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x348(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp)
	class UImage*                                Image_LeftBorder;                                  // 0x350(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftFill;                                    // 0x358(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightBorder;                                 // 0x360(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightFill;                                   // 0x368(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ButtonIcon;                                    // 0x370(0x8)(ConstParm, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class USpacer*                               Spacer_164;                                        // 0x380(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, NonTransactional, ContainsInstancedReference)
	class UTextBlock*                            Text_ButtonMessage;                                // 0x388(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Hello_Sasha_Whats_up;                              // 0x390(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x3A0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ENUM_ButtonType                   Button_Type;                                       // 0x3B0(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D6C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       In_Width_Override;                                 // 0x3B8(0x8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       In_Height_Override;                                // 0x3C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseIcon;                                           // 0x3C8(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D6D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x3D0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             ImageSize;                                         // 0x3D8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  Text;                                              // 0x3E8(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	struct FSlateFontInfo                        ButtonFont;                                        // 0x400(0x58)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       SpaceBetweenIconAndText;                           // 0x458(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x460(0x10)(Edit, ExportObject, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x470(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x480(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x490(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSTRUCT_FullButtonDesign              ButtonDesign;                                      // 0x4A0(0xF0)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceDebug;                                        // 0x590(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_ButtonStates                 DebugState;                                        // 0x591(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Global_Base_C* GetDefaultObj();

	void SetWidgetText(class FText* InText);
	void SetButtonColorPreset(enum class ENUM_ButtonStates State, enum class ENUM_ButtonStates* Temp_byte_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_ButtonStates* Temp_byte_Variable_1, enum class ENUM_ButtonStates* Temp_byte_Variable_2, struct FSlateColor* K2Node_Select_Default, struct FSlateColor* K2Node_Select_Default_1, struct FSlateColor* K2Node_Select_Default_2);
	struct FSlateBrush SetFillToColor(struct FSlateColor* TintColor);
	void SetBorderToColor(struct FSlateColor* TintColor);
	void BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	float Tick();
	void BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	float ExecuteUbergraph_UI_Button_Ark_Global_Base(class UTexture2D* Temp_object_Variable, enum class ENUM_ButtonType* Temp_byte_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, class UTexture2D** K2Node_Select_Default, enum class ENUM_ButtonType* Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UTexture2D** K2Node_Select_Default_1, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	void Hello_Sasha_Whats_up__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnClick__DelegateSignature();
};

}


