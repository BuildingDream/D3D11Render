Texture2D Diffuse : register( t0 );
SamplerState LinearSample : register( s0 );

cbuffer ConstantBuffer : register( b0 )
{
    matrix View;
    matrix Projection;
    matrix World;
};

struct VS_INPUT
{
    float4 Pos : POSITION;
    float2 Tex : TEXCOORD0;
};

struct PS_INPUT
{
    float4 Pos : SV_POSITION;
    float2 Tex : TEXCOORD0;
};

PS_INPUT VS( VS_INPUT input )
{
    PS_INPUT output = (PS_INPUT)0;
    output.Pos = mul( input.Pos, World );
    output.Pos = mul( output.Pos, View );
    output.Pos = mul( output.Pos, Projection );
    output.Tex = input.Tex;
    
    return output;
}

float4 PS( PS_INPUT input) : SV_Target
{
    return Diffuse.Sample( LinearSample, input.Tex );
}