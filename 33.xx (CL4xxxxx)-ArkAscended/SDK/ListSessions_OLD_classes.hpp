#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x11D0 - 0x10E0)
// WidgetBlueprintGeneratedClass ListSessions_OLD.ListSessions_OLD_C
class UListSessions_OLD_C : public UUI_ListSessions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10E0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x10E8(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x10F0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0x10F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                AscendingDescendingIcon;                           // 0x1100(0x8)(Edit, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             AutoFavoriteCheckBox;                              // 0x1108(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BackgroundBorder;                                  // 0x1110(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x1118(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1120(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                CreatureBottomBorder;                              // 0x1128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                CreatureTopBorder;                                 // 0x1130(0x8)(Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   FavoritesButton;                                   // 0x1138(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      FindSessionName;                                   // 0x1140(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       GameModeComboBox;                                  // 0x1148(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceLeft;                      // 0x1150(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceTop;                       // 0x1158(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_Start;                         // 0x1160(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_3194;                                        // 0x1168(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly, NoDestructor, AutoWeak, AdvancedDisplay, Protected)
	class UCustomButtonWidget*                   JoinLastPlayedServer;                              // 0x1170(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   JoinSessionButton;                                 // 0x1178(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapComboBox;                                       // 0x1180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      PasswordField;                                     // 0x1188(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RefreshSessionsButton;                             // 0x1190(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   RentYourOwnServerButton;                           // 0x1198(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       ServerTypeComboBox;                                // 0x11A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SessionSizeBox;                                    // 0x11A8(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowNotFullServers;                                // 0x11B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCheckBox*                             ShowProtectedServersCheckBox;                      // 0x11B8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       SortComboBox;                                      // 0x11C0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   SortOrderToggleButton;                             // 0x11C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UListSessions_OLD_C* GetDefaultObj();

	class USizeBox* GetSizeboxForExtraHandheldScaling();
	class UWidget* GetWidgetToScaleForHandheld();
	void BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	void BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	void BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	void ExecuteUbergraph_ListSessions_OLD(int32* EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1);
};

}


