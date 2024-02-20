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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x340(0x8)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Boarder_FullWindow;                                // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar_InstallProgress;                       // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Status;                                       // 0x358(0x8)(ExportObject, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x360(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
	enum class EInstallStatus                    Installation_Status;                               // 0x368(0x1)(Edit, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x369(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EInstallStatus                    PreNotifState;                                     // 0x36A(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstallationStatus_C* GetDefaultObj();

	TArray<struct FFormatArgumentData> SetTextBasedOnState(enum class EInstallStatus* Index, enum class EInstallStatus* Temp_byte_Variable, class FText* K2Node_Select_Default, class FText* CallFunc_Format_ReturnValue);
	double GetTrueProgress(double ReturnValue, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue);
	struct FLinearColor UpdateColor(enum class EInstallStatus Install_Status, enum class EInstallStatus* Temp_byte_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue);
	bool UpdateModProgress(int32* Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState InstallationPhase, bool CallFunc_IsAnimationPlaying_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C* GameSlot);
	double PlayNotificationUpdate(class FText* Message);
	bool ExecuteUbergraph_UI_InstallationStatus(class UUI_GameSlot_C* K2Node_CustomEvent_GameSlot, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_CustomEvent_Duration, class FText K2Node_CustomEvent_Message, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


