#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class WaveTable.WaveTableBank
class UWaveTableBank : public UObject
{
public:
	uint8                                        Pad_1F64[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EWaveTableResolution              Resolution;                                        // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBipolar;                                          // 0x31(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F65[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FWaveTableBankEntry>           Entries;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWaveTableBank* GetDefaultObj();

};

}

