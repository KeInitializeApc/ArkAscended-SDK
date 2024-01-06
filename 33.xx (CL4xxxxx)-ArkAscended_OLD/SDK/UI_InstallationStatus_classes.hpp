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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x340(0x8)(ConstParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UBorder*                               Boarder_FullWindow;                                // 0x348(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBar_InstallProgress;                       // 0x350(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Status;                                       // 0x358(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x360(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	enum class EInstallStatus                    Installation_Status;                               // 0x368(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         Initialized;                                       // 0x369(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EInstallStatus                    PreNotifState;                                     // 0x36A(0x1)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstallationStatus_C* GetDefaultObj();

	class FText SetTextBasedOnState(enum class EInstallStatus* Temp_byte_Variable, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* K2Node_Select_Default, class FText* CallFunc_Format_ReturnValue);
	double GetTrueProgress(double* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double* CallFunc_Divide_DoubleDouble_ReturnValue);
	bool UpdateColor(enum class EInstallStatus* Temp_byte_Variable, struct FLinearColor* K2Node_Select_Default);
	class UUMGSequencePlayer* UpdateModProgress(bool* CallFunc_NotEqual_ByteByte_ReturnValue, bool* CallFunc_NotEqual_ByteByte_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	class UUI_GameSlot_C* Event_Set_Bindings_To_Game_Slot();
	double PlayNotificationUpdate(class FText* Message);
	float ExecuteUbergraph_UI_InstallationStatus(int32* EntryPoint);
};

}


