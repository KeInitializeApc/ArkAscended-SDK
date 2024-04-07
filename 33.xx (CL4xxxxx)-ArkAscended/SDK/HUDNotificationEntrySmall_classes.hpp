#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x420 - 0x330)
// WidgetBlueprintGeneratedClass HUDNotificationEntrySmall.HUDNotificationEntrySmall_C
class UHUDNotificationEntrySmall_C : public UPrimalUserWidget
{
public:
	class UBorder*                               Border;                                            // 0x330(0x8)(ConstParm, ExportObject, ReturnParm, Config, GlobalConfig)
	class UBorder*                               Border1;                                           // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_NotifIcon;                                   // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            QuantityText;                                      // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FHUDNotificationEntry_Struct          HUDNotificationEntry;                              // 0x350(0x4C)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_2F5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NotificationsQuantity;                             // 0x3A0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F5E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastTimeInit;                                      // 0x3A8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            GenericAlertIcon;                                  // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FHUDNotificationEntry_Struct>  HUDNotificationArray;                              // 0x3B8(0x10)(ConstParm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsSmallNotification;                               // 0x3C8(0x1)(Edit, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F5F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHUDNotificationEntry_Struct          CurrentNotiifcationWithProgress;                   // 0x3D0(0x4C)(ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F60[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHUDNotificationEntrySmall_C* GetDefaultObj();

	class FText Get_QuantityText_Text(bool Temp_bool_Variable, class FText* Temp_text_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default);
	int32 CheckDestroy(bool* RequireUpdate, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsSOTF_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast);
	bool UpdateProgressData(double CurrentMaxTime, int32* IndexCurrentMaxTime, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item);
	bool Get_Image_NotifIcon_Brush(bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default);
	float InitWidget(bool* IsSmallNotification, int32* IndexCurrentMaxTime, double CurrentMaxTime, double CallFunc_SelectFloat_ReturnValue, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array);
	struct FSlateColor GetNotifStringColor();
};

}


