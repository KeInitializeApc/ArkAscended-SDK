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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            TB_COUNT;                                          // 0x338(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_SumPrice;                                       // 0x340(0x8)(ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       Price;                                             // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x350(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UWBP_PriceColumns_C* GetDefaultObj();

	bool PreConstruct();
	void Construct();
	struct FFormatArgumentData ExecuteUbergraph_WBP_PriceColumns(int32 EntryPoint, int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, class FText* CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, class FText* CallFunc_Format_ReturnValue_1);
};

}


