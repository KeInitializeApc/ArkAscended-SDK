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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UTextBlock*                            TB_COUNT;                                          // 0x338(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TB_SumPrice;                                       // 0x340(0x8)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       Price;                                             // 0x348(0x8)(Edit, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x350(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UWBP_PriceColumns_C* GetDefaultObj();

	void Construct();
	class FText ExecuteUbergraph_WBP_PriceColumns(int32* EntryPoint, int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, double* CallFunc_Multiply_IntFloat_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1);
};

}


