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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_CentralFill;                                // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_CentralFill_1;                              // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UBorder*                               Border_CentralFill_2;                              // 0x348(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_LeftBorder;                                  // 0x350(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftBorder_1;                                // 0x358(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_LeftBorder_2;                                // 0x360(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_LeftFill;                                    // 0x368(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_LeftFill_1;                                  // 0x370(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_LeftFill_2;                                  // 0x378(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_RightBorder;                                 // 0x380(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightBorder_1;                               // 0x388(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_RightBorder_2;                               // 0x390(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UImage*                                Image_RightFill;                                   // 0x398(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_RightFill_1;                                 // 0x3A0(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UImage*                                Image_RightFill_2;                                 // 0x3A8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UProgressBar*                          Instaling_ProgressBar;                             // 0x3B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Button_Ark_Global_Install_C*       UI_Button_Ark_Global_Install;                      // 0x3B8(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, GlobalConfig, DuplicateTransient)
	class UUI_Button_Ark_Global_Update_C*        UI_Button_Ark_Global_Update;                       // 0x3C0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient)
	class UProgressBar*                          Updating_ProgressBar_1;                            // 0x3C8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UWidgetSwitcher*                       WidgetSwitcher_State;                              // 0x3D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClickInstall_B;                                  // 0x3D8(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        GameSlotRef;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClickUpdate_B;                                   // 0x3F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x400(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Button_InstallSwitcher_C* GetDefaultObj();

	bool UpdateButtonSwitcherStatus();
	enum class ENUM_Install UpdateButtonCollor();
	void Update_All_Theme_Settings();
	enum class ELibraryProgressState SetProgress();
	void BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature();
	void BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Update_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	bool ExecuteUbergraph_UI_Button_InstallSwitcher(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
	void OnClickUpdate_B__DelegateSignature();
	void OnClickInstall_B__DelegateSignature();
};

}


