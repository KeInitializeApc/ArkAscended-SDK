#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	bool                                         bCompressionTest;                                  // 0x80(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bWriteV5Dictionaries;                              // 0x81(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HashTableSize;                                     // 0x84(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        DictionarySize;                                    // 0x88(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        DictionaryTrials;                                  // 0x8C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        TrialRandomness;                                   // 0x90(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        TrialGenerations;                                  // 0x94(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bNoTrials;                                         // 0x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B6[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOodleNetworkTrainerCommandlet* GetDefaultObj();

};

}


