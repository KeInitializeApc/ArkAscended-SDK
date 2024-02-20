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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x338(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst)
	class UVerticalBox*                          ComboBoxes;                                        // 0x348(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                DarkBackground;                                    // 0x350(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        DeleteSaveContainer;                               // 0x358(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   DeleteSingleplayerData;                            // 0x360(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UImage*                                Image_320;                                         // 0x368(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, AutoWeak, AssetRegistrySearchable)
	class UImage*                                Image_519;                                         // 0x370(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditorOnly, SimpleDisplay)
	class UImage*                                LockedImage;                                       // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            LockedText;                                        // 0x380(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            MapDescriptionLabel;                               // 0x388(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                MapImage;                                          // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapModeComboBox;                                   // 0x398(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       MapNameComboBox;                                   // 0x3A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               ScrollViewSelectionButton;                         // 0x3A8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedImage;                                     // 0x3B0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            SelectedMapLabel;                                  // 0x3B8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SetupAsMapIndex;                                   // 0x3C0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B0A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapSelect_Session_C*                  ParentMapSelectSession;                            // 0x3C8(0x8)(ConstParm, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UHostSession_Switch_C*                 ParentHostSession;                                 // 0x3D0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentMapIndex;                                   // 0x3D8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsChangingSelectEntry;                             // 0x3DC(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EDLCSelector                      DLCType;                                           // 0x3DD(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B0C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TotalTime;                                         // 0x3E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapSelect_Entry_C* GetDefaultObj();

	bool FixupComboBox();
	void UpdateDeleteSaveButton(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_HasSaveForMapIndex_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default);
	bool IsSelected();
	bool Set_To_Map_Select_View(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1);
	void Show_Hide_Locked_Images(bool IsLocked, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default);
	bool SetupUsingHostSession(int32* CallFunc_SelectInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription);
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetSelected(bool* IsSelected);
	void BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType);
	void BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType);
	void BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	float Tick();
	double ExecuteUbergraph_MapSelect_Entry(enum class ESlateVisibility* Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Sin_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility* K2Node_Select_Default, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


