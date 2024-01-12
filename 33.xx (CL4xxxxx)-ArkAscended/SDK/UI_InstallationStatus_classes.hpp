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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x338(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UBorder*                               Boarder_FullWindow;                                // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBar_InstallProgress;                       // 0x350(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Status;                                       // 0x358(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x360(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	enum class EInstallStatus                    Installation_Status;                               // 0x368(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         Initialized;                                       // 0x369(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EInstallStatus                    PreNotifState;                                     // 0x36A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstallationStatus_C* GetDefaultObj();

	TArray<struct FFormatArgumentData> SetTextBasedOnState(enum class EInstallStatus Temp_byte_Variable, class FText* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue);
	double GetTrueProgress(int32* Amount, enum class ELibraryProgressState InstalationState, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue);
	struct FLinearColor UpdateColor(enum class EInstallStatus* Install_Status, enum class EInstallStatus Temp_byte_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue);
	float UpdateModProgress(int32* Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState* InstallationPhase, bool* CallFunc_IsAnimationPlaying_ReturnValue, double* CallFunc_GetTrueProgress_ReturnValue, bool* CallFunc_GetTrueProgress_MaintainPreviousValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C** GameSlot);
	class FText PlayNotificationUpdate();
	bool ExecuteUbergraph_UI_InstallationStatus(class UUI_GameSlot_C** K2Node_CustomEvent_GameSlot, bool* CallFunc_IsValid_ReturnValue, double* K2Node_CustomEvent_Duration, class FText* K2Node_CustomEvent_Message, float* CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


