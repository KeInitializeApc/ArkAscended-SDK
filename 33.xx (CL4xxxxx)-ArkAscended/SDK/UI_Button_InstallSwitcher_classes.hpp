#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x408 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C
class UUI_Button_InstallSwitcher_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_CentralFill;                                // 0x338(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_CentralFill_1;                              // 0x340(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UBorder*                               Border_CentralFill_2;                              // 0x348(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_LeftBorder;                                  // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftBorder_1;                                // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_LeftBorder_2;                                // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_LeftFill;                                    // 0x368(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftFill_1;                                  // 0x370(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_LeftFill_2;                                  // 0x378(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_RightBorder;                                 // 0x380(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightBorder_1;                               // 0x388(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_RightBorder_2;                               // 0x390(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_RightFill;                                   // 0x398(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightFill_1;                                 // 0x3A0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_RightFill_2;                                 // 0x3A8(0x8)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UProgressBar*                          Instaling_ProgressBar;                             // 0x3B0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_Global_Install;                      // 0x3B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UUI_Button_Ark_Global_Update_C*        UI_Button_Ark_Global_Update;                       // 0x3C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class UProgressBar*                          Updating_ProgressBar_1;                            // 0x3C8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UWidgetSwitcher*                       WidgetSwitcher_State;                              // 0x3D0(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClickInstall_B;                                  // 0x3D8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        GameSlotRef;                                       // 0x3E8(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClickUpdate_B;                                   // 0x3F0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x400(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_InstallSwitcher_C* GetDefaultObj();

	bool UpdateButtonSwitcherStatus(enum class EInstallStatus Selection);
	void UpdateButtonCollor(enum class ENUM_Install ButtonStatus);
	void Update_All_Theme_Settings();
	void SetProgress(int32* Amount, enum class ELibraryProgressState InstalationState);
	void BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Update_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	float ExecuteUbergraph_UI_Button_InstallSwitcher(bool* CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_Amount, enum class ELibraryProgressState K2Node_CustomEvent_InstalationState, double CallFunc_GetProcessedBarProgress_ReturnValue, bool CallFunc_GetProcessedBarProgress_MaintainPreviousValue, bool* CallFunc_IsValid_ReturnValue_1);
	void OnClickUpdate_B__DelegateSignature();
	void OnClickInstall_B__DelegateSignature();
};

}


