#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x430 - 0x3F8)
// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C
class UDataListEntryWidgetGeneric_Engram_C : public UDataListEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UTextBlock*                            EngramName;                                        // 0x400(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            EngramPoints;                                      // 0x408(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USizeBox*                              EngramTextBox;                                     // 0x410(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryButton_CustomOverlay*    MyDataListButton;                                  // 0x418(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UOverlay*                              Overlay;                                           // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UImage*                                SelectedDataList;                                  // 0x428(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntryWidgetGeneric_Engram_C* GetDefaultObj();

	bool OnPaint(struct FPaintContext* Context, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1);
	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	class FText ExecuteUbergraph_DataListEntryWidgetGeneric_Engram(int32* EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_ToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
};

}


