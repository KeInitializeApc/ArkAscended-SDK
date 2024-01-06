#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESequenceTimeUnit : uint8
{
	DisplayRate                    = 0,
	TickResolution                 = 1,
	ESequenceTimeUnit_MAX          = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct SequencerScripting.SequencerScriptingRange
struct FSequencerScriptingRange
{
public:
	uint8                                        bHasStart : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasEnd : 1;                                       // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_9E : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_DA5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InclusiveStart;                                    // 0x4(0x4)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExclusiveEnd;                                      // 0x8(0x4)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameRate                            InternalRate;                                      // 0xC(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


