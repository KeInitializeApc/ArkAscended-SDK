#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xF18 - 0xEF8)
// BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
class AShooterHudBP_C : public AShooterHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEF8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0xF00(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class UHUDNotificationPanel_C*               CustomHUDNotificationPanelRef;                     // 0xF08(0x8)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                HUDNotificationsTemplate;                          // 0xF10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AShooterHudBP_C* GetDefaultObj();

	double BPCustomAddHUDNotification(const class FString& NotificationString, const struct FColor& NotificationColor, class UMaterialInterface* NotificationMaterial, class UTexture2D* NotificationTexture, int32 MessageTypeID, int32* Priority, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32* Temp_int_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AShooterCharacter*>* CallFunc_GetAllLocalPlayerCharacters_ReturnValue, class AShooterCharacter* CallFunc_Array_Get_Item);
	void BPForceReinitUI();
	bool ExecuteUbergraph_ShooterHudBP(int32* EntryPoint);
};

}


