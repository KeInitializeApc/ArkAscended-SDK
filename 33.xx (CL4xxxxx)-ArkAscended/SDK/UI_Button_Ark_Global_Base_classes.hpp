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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_CentralFill;                                // 0x338(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Main;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_1;                                   // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class UImage*                                Image_LeftBorder;                                  // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftFill;                                    // 0x358(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightBorder;                                 // 0x360(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightFill;                                   // 0x368(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ButtonIcon;                                    // 0x370(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x378(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	class USpacer*                               Spacer_164;                                        // 0x380(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, NonTransactional, ContainsInstancedReference)
	class UTextBlock*                            Text_ButtonMessage;                                // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            Hello_Sasha_Whats_up;                              // 0x390(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x3A0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_ButtonType                   Button_Type;                                       // 0x3B0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3743[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       In_Width_Override;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       In_Height_Override;                                // 0x3C0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseIcon;                                           // 0x3C8(0x1)(Edit, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3744[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x3D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FVector2D                             ImageSize;                                         // 0x3D8(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x3E8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FSlateFontInfo                        ButtonFont;                                        // 0x400(0x58)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       SpaceBetweenIconAndText;                           // 0x458(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x460(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x470(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x480(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x490(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSTRUCT_FullButtonDesign              ButtonDesign;                                      // 0x4A0(0xF0)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceDebug;                                        // 0x590(0x1)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_ButtonStates                 DebugState;                                        // 0x591(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_Ark_Global_Base_C* GetDefaultObj();

	class FText SetWidgetText();
	void SetButtonColorPreset(enum class ENUM_ButtonStates State, enum class ENUM_ButtonStates Temp_byte_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ENUM_ButtonStates Temp_byte_Variable_1, enum class ENUM_ButtonStates Temp_byte_Variable_2, struct FSlateColor* K2Node_Select_Default, struct FSlateColor* K2Node_Select_Default_1, struct FSlateColor* K2Node_Select_Default_2);
	struct FSlateColor SetFillToColor(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateColor SetBorderToColor();
	void BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Button_Ark_Blue_Button_Main_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__UI_Button_Ark_Global_Base_Button_Main_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	float ExecuteUbergraph_UI_Button_Ark_Global_Base(class UTexture2D** Temp_object_Variable, enum class ENUM_ButtonType Temp_byte_Variable, class UTexture2D** Temp_object_Variable_1, class UTexture2D** Temp_object_Variable_2, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool Temp_bool_IsClosed_Variable, class UTexture2D** K2Node_Select_Default, enum class ENUM_ButtonType Temp_byte_Variable_1, class UTexture2D** Temp_object_Variable_3, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UTexture2D** K2Node_Select_Default_1, bool Temp_bool_IsClosed_Variable_1, bool* CallFunc_IsValid_ReturnValue_1);
	void Hello_Sasha_Whats_up__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnClick__DelegateSignature();
};

}


