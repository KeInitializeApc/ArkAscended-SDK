#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x354 - 0x330)
// WidgetBlueprintGeneratedClass WBP_PriceColumns.WBP_PriceColumns_C
class UWBP_PriceColumns_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            TB_COUNT;                                          // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_SumPrice;                                       // 0x340(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       Price;                                             // 0x348(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x350(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UWBP_PriceColumns_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	TArray<struct FFormatArgumentData> ExecuteUbergraph_WBP_PriceColumns(class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
};

}


