#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x3F8 - 0x360)
// WidgetBlueprintGeneratedClass CharacterViewPanel.CharacterViewPanel_C
class UCharacterViewPanel_C : public UCharacterViewPanelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_9;    // 0x368(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, Interp, EditorOnly)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoStatusLabel_1;                                 // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UTextBlock*                            DinoStatusLabel_2;                                 // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            DinoStatusLabel_3;                                 // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	class UTextBlock*                            DinoStatusLabel_4;                                 // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UVerticalBox*                          GamepadControlsDrone;                              // 0x398(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x3A0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x3A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x3B0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_3;                                           // 0x3B8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_22;                                          // 0x3C8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NonTransactional, NoDestructor)
	class UImage*                                Image_44;                                          // 0x3D0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional, EditorOnly)
	class UUI_PreviewWidget*                     UI_PreviewWidget;                                  // 0x3D8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig)
	double                                       Additional_Cam_Head_Socket_Offset;                 // 0x3E0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       DefaultPlayerSizeMaxZoom;                          // 0x3E8(0x8)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       MaxPlayerSizeMaxZoom;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCharacterViewPanel_C* GetDefaultObj();

	bool SetupGamepadButtons(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	float ExecuteUbergraph_CharacterViewPanel(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, TArray<class UWidget*>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_ResetZoomTo_zoom_ImplicitCast);
};

}


