#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B (0x36B - 0x330)
// WidgetBlueprintGeneratedClass UI_InstallationStatus.UI_InstallationStatus_C
class UUI_InstallationStatus_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x338(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_FullWindow;                                // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_InstallProgress;                       // 0x350(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Status;                                       // 0x358(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x360(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	enum class EInstallStatus                    Installation_Status;                               // 0x368(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x369(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class EInstallStatus                    PreNotifState;                                     // 0x36A(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstallationStatus_C* GetDefaultObj();

	class FText SetTextBasedOnState(enum class EInstallStatus Temp_byte_Variable, class FText* Temp_text_Variable, class FText* Temp_text_Variable_1, class FText* Temp_text_Variable_2, class FText* Temp_text_Variable_3, class FText* Temp_text_Variable_4, class FText* Temp_text_Variable_5, class FText* Temp_text_Variable_6, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText K2Node_Select_Default);
	double GetTrueProgress(int32* Amount, enum class ELibraryProgressState InstalationState, bool K2Node_SwitchEnum_CmpSuccess, enum class ELibraryProgressState Temp_byte_Variable, double K2Node_Select_Default);
	bool UpdateColor(enum class EInstallStatus* Install_Status, enum class EInstallStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default);
	bool UpdateModProgress(enum class ELibraryProgressState* InstallationPhase, bool K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_IsAnimationPlaying_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, double* CallFunc_GetTrueProgress_ReturnValue, bool* CallFunc_GetTrueProgress_MaintainPreviousValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C** GameSlot);
	double PlayNotificationUpdate(class FText* Message);
	bool ExecuteUbergraph_UI_InstallationStatus(int32* EntryPoint, double* K2Node_CustomEvent_Duration, float* CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


