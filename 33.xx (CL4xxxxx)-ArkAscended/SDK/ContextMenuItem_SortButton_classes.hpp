#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x470 - 0x440)
// WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C
class UContextMenuItem_SortButton_C : public UContextMenuItem_Sort
{
public:
	class UImage*                                Asc;                                               // 0x440(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x448(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UCheckBox*                             CheckBox;                                          // 0x450(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class UImage*                                Desc;                                              // 0x458(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UInputKeyDisplayWidget*                ShortcutKey;                                       // 0x460(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       SortDir;                                           // 0x468(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UContextMenuItem_SortButton_C* GetDefaultObj();

};

}


