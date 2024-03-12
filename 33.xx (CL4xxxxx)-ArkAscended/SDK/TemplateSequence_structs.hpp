#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETemplateSectionPropertyScaleType : int32
{
	FloatProperty                  = 0,
	TransformPropertyLocationOnly  = 1,
	TransformPropertyRotationOnly  = 2,
	ETemplateSectionPropertyScaleType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x138 - 0x0)
// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
struct FTemplateSectionPropertyScale
{
public:
	struct FGuid                                 ObjectBinding;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0x10(0x14)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	enum class ETemplateSectionPropertyScaleType PropertyScaleType;                                 // 0x24(0x4)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x28(0x110)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData
{
public:
	TWeakObjectPtr<class UObject>                Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B1C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

}


