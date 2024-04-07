#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x3E8 - 0x330)
// WidgetBlueprintGeneratedClass MapSelect_Entry.MapSelect_Entry_C
class UMapSelect_Entry_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x338(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UVerticalBox*                          ComboBoxes;                                        // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                DarkBackground;                                    // 0x350(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        DeleteSaveContainer;                               // 0x358(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   DeleteSingleplayerData;                            // 0x360(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, GlobalConfig)
	class UImage*                                Image_320;                                         // 0x368(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_519;                                         // 0x370(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, SimpleDisplay)
	class UImage*                                LockedImage;                                       // 0x378(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            LockedText;                                        // 0x380(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            MapDescriptionLabel;                               // 0x388(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                MapImage;                                          // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapModeComboBox;                                   // 0x398(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapNameComboBox;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               ScrollViewSelectionButton;                         // 0x3A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedImage;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            SelectedMapLabel;                                  // 0x3B8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SetupAsMapIndex;                                   // 0x3C0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMapSelect_Session_C*                  ParentMapSelectSession;                            // 0x3C8(0x8)(Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x3D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentMapIndex;                                   // 0x3D8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsChangingSelectEntry;                             // 0x3DC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EDLCSelector                      DLCType;                                           // 0x3DD(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_151[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       TotalTime;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapSelect_Entry_C* GetDefaultObj();

	bool FixupComboBox(int32 CallFunc_GetSelectedIndex_ReturnValue);
	bool UpdateDeleteSaveButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_HasSaveForMapIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void IsSelected(bool* Selected, bool CallFunc_IsVisible_ReturnValue);
	void Set_To_Map_Select_View(bool* IsMapSelectView, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	bool Show_Hide_Locked_Images(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	int32 SetupUsingHostSession(class UUI_HostSession** HostSession, class UMapSelect_Session_C* MapSelectSession, int32 WithIndex, bool* CallFunc_Greater_IntInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription);
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool SetSelected();
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	enum class ESelectInfo BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem);
	enum class ESelectInfo BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem);
	void BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	float ExecuteUbergraph_MapSelect_Entry(int32* EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Sin_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* K2Node_CustomEvent_IsSelected, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_1, int32 CallFunc_GetSelectedIndex_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}

