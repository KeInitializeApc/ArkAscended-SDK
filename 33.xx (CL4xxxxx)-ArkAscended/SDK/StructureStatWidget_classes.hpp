#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A8 (0xA60 - 0x7B8)
// WidgetBlueprintGeneratedClass StructureStatWidget.StructureStatWidget_C
class UStructureStatWidget_C : public UStructureStatWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                IconImage;                                         // 0x7C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UProgressBar*                          StatBar;                                           // 0x7C8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FProgressBarStyle                     StyleBar;                                          // 0x7D0(0x290)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStructureStatWidget_C* GetDefaultObj();

	void Construct();
	bool PreConstruct();
	bool ExecuteUbergraph_StructureStatWidget(int32* EntryPoint);
};

}


