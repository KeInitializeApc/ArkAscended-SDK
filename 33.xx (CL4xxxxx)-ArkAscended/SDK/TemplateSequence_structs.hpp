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
	struct FGuid                                 ObjectBinding;                                     // 0x0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0x10(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class ETemplateSectionPropertyScaleType PropertyScaleType;                                 // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x28(0x110)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData
{
public:
	TWeakObjectPtr<class UObject>                Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1402[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

}


