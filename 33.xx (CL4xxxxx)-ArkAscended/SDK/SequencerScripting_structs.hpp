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
	uint8                                        bHasStart : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasEnd : 1;                                       // Mask: 0x2, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_9F : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_AC3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InclusiveStart;                                    // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExclusiveEnd;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameRate                            InternalRate;                                      // 0xC(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


