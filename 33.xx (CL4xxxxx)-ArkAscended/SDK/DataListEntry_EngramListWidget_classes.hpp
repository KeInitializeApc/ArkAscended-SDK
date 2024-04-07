#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x878 - 0x810)
// WidgetBlueprintGeneratedClass DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C
class UDataListEntry_EngramListWidget_C : public UDataListEntryEngramList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x810(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                ElementIcon;                                       // 0x818(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                EngramRowEnd;                                      // 0x820(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	class UImage*                                EngramRowMiddle;                                   // 0x828(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	class UImage*                                EngramRowStart;                                    // 0x830(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig)
	class UImage*                                Image_151;                                         // 0x838(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UTextBlock*                            LevelLabel;                                        // 0x840(0x8)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UScaleBox*                             LevelLabelEffect;                                  // 0x848(0x8)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           NextLevelUpTextColor;                              // 0x850(0x14)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FSlateColor                           CurrentLevelUpTextColor;                           // 0x864(0x14)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListEntry_EngramListWidget_C* GetDefaultObj();

	void Construct();
	bool ExecuteUbergraph_DataListEntry_EngramListWidget(int32* EntryPoint, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
};

}


