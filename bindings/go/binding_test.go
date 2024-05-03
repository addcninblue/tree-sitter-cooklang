package tree_sitter_cooklang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cooklang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cooklang.Language())
	if language == nil {
		t.Errorf("Error loading Cooklang grammar")
	}
}
